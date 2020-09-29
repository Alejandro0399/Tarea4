#include "reloj.h"

uint8_t g_segundos = 0;
uint8_t g_minutos = 0;
uint8_t g_horas = 0;

void segundero(void)
{
  g_segundos++;
  if(ALARMA_SEGUNDOS == g_segundos)
  {
    //generar una notificacion
  }
  if(LIMITE_SEGUNDOS == g_segundos)
  {
    g_segundos = 0;
    minutero();
  }
}

void minutero(void)
{
  if(ALARMA_MINUTOS == g_minutos)
  {
    //generar una notificacion
  }
  if(LIMITE_MINUTOS == g_minutos)
  {
    g_minutos = 0;
    horas();
  }
}

void horas(void)
{
  if(ALARMA_HORAS == g_horas)
  {
    //generar una notificacion
  }
  if(LIMITE_HORAS == g_horas)
  {
    g_horas = 0;
  }
}

void alarm(void)
{

}

void imprimir_hora(void)
{

}
