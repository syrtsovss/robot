## PhysSolver

2022, 10-1, Атовмян Артем, Молошнев Степан, Плотникова Анастасия

C++

Тестовый сервер находится [здесь](https://r2d.buran.center/).

### Описание:

В данный момент программа умеет рассчитывать тривиальную баллистику.

![workingprogramm](/workingprogramm1)

### План работы:
- [ ] Установка движка symengine, необходимого для парсинга синтаксических структур (5 часов)
   - [ ] разбор авторской документации
   - [ ] установка движка, тест функционала
   - [ ] разработка улучшений для конкретного проекта
   
  Symengine - новый современный проект на Github, который позволит облегчить операции с переменными и даст возможность осуществить парсинг арифметических синтаксических структур 
  
- [ ] Реализация способа хранения типов, значений переменных, связь с формулами. (5 часов)
    + [x] основной механизм
    + [ ] подключение справочных вычислительных материалов (формул)
    
  Программа начнет рассчитывать все неизвестные величины, которые она может рассчитать, пользуясь подключенным набором вычислительных материалов.
      
- [ ] Модель движения тела, брошенного под углом к горизонту (5 часов)
    - [ ] консольная программа расчета требуемых параметров
    - [ ] визуализация движения тела
    
  Программа начнет рассчитывать неизвестные параметры движения тела, брошенного под углом к горизонту, принимая минимальные данные от пользователя.
  
- [ ] Кинематические задачи (5 часов)
    + [ ] равноускоренное (в т.ч. равномерное) движение вдоль прямой
    + [ ] равноускоренное движение в плоскости
    
  Программа начнет решать кинетические задачи, в частности, главную задачу кинематики: находить все параметры движения тела в данный момент времени при заданном начальном состоянии.

- [ ] Закон сохранения энергии (5 часов)
    + [ ] математический маятник
    + [ ] пружинный маятник
    + [ ] произвольный случай для одного тела (полные данные о начальном и конечном состоянии)

  Программа научится решать простые задачи на законы сохранения и изменения энергии.
  
- [ ] Электрические цепи (5 часов)
    + [ ] простые электрические цепи
    + [ ] электрические цепи с ВАХ
    + [ ] законы Кирхгофа

  Программа научится решать простые задачи на электрические цепи.
  
- [ ] Блок с теоретическим материалом и описанием функционала программы (5 часов)
    + [ ] список поддерживаемых формул
    + [ ] список поддерживаемых задач, примеры
    + [ ] теоретические материалы по темам
    + [ ] вызов списка основных формул в процессе решения задачи
    
  Программа научится вызывать список основных формул, необходимых для решения задачи. Пользователь получит доступ к теоретическим материалам и инструкцию по использованию программы.
  Создание сервера.
  
- [ ] Web-сайт (5 часов)
    + [ ] подключение к серверу
    + [ ] блок решения задач
    + [ ] блок с теоретическими материалами
    + [ ] cетевые команды 
    
  Финальная стадия. Пользователь получит возможность взаимодействовать непосредственно с сайтом, используя полный функционал программы. Выпуск готового продукта.
