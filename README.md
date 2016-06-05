# Janiszewski Mateusz 
 
## Symulator Korsarzy 
 
Celem symulacji jest walka okrętu korsarzy z okrętami kupieckimi. W tym celu stworzyłem klasy Ship oraz dziedziczące po klasie Ship klasy Trade_Ship oraz Corsairs_Ship. Parametrami okrętu są m.in:
 - Hp
 - liczba żeglarzy
 - liczba armat
 - szczęście
 - szybkość
 - złoto
  
Korsarze po napotkaniu wrogiego okrętu rozpoczynają walkę. Jeśli uda im się wygrać starcie łupią statek kupiecki (zdobywając złoto) i posyłają go na dno. W przeciwnym razie korsarze zostają zniszczeni i symulacja zostaje zakończona.
 
Mechanika walki:
 Jeśli szczęście okrętu jest większe od losowej wartości z przedziału <0-100> okręt trafia w przeciwnika. Wartość obrażenia jest zleżna od parametrów: liczba żeglarzy oraz liczba armat pomniejszona o wartość obrony zależnej od parametrów: szczęście oraz szybkość. Okręty atakują na zmianę dopóki jeden z nich zostanie zatopiony.
 
Na koniec symulacji zostaje wyświetlony komunikat podsumowujący dokonania korsarzy.
