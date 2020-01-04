#include "weather.hpp"

void weather_update_rutine()
{
  HTTPClient http;
  StaticJsonDocument<800> doc;
  http.begin(OPENWEATHER_API_URL);
  int httpCode = http.GET();
  if (httpCode > 0)
  {
    String payload = http.getString();
    DeserializationError error = deserializeJson(doc, payload);
    if (error)
    {
      Serial.print(F("deserializeJson() failed: "));
      Serial.println(error.c_str());
    }
    else
    {
      JsonObject weather_0 = doc["weather"][0];
      const char *weather_0_icon = weather_0["icon"];
      JsonObject main = doc["main"];
      float main_temp = main["temp"];
      String api_icon = String(weather_0_icon);
      set_epaper_meteo(String(main_temp, 1), convert_icon(api_icon));
    }
  }
  else
  {
    Serial.println("Error on HTTP request");
  }
  http.end();
}

char convert_icon(String weather_icon)
{
  char output = 41;
  if (weather_icon == "01d")
  {
    output = 66;
  }
  if (weather_icon == "02d")
  {
    output = 72;
  }
  if (weather_icon == "03d")
  {
    output = 78;
  }
  if (weather_icon == "04d")
  {
    output = 89;
  }
  if (weather_icon == "09d")
  {
    output = 82;
  }
  if (weather_icon == "10d")
  {
    output = 81;
  }
  if (weather_icon == "11d")
  {
    output = 90;
  }
  if (weather_icon == "13d")
  {
    output = 87;
  }
  if (weather_icon == "50d")
  {
    output = 74;
  }
  if (weather_icon == "01n")
  {
    output = 67;
  }
  if (weather_icon == "02n")
  {
    output = 73;
  }
  if (weather_icon == "03n")
  {
    output = 78;
  }
  if (weather_icon == "04n")
  {
    output = 89;
  }
  if (weather_icon == "09n")
  {
    output = 82;
  }
  if (weather_icon == "10n")
  {
    output = 81;
  }
  if (weather_icon == "11n")
  {
    output = 90;
  }
  if (weather_icon == "13n")
  {
    output = 87;
  }
  if (weather_icon == "50n")
  {
    output = 75;
  }
  return output;
}