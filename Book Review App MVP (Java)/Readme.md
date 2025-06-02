app/
├── src/
│   ├── main/
│   │   ├── java/com/example/bookreview/
│   │   │   ├── data/
│   │   │   │   ├── local/ (Room entities, DAOs, Database)
│   │   │   │   ├── remote/ (Retrofit API service, models)
│   │   │   │   ├── repository/ (BookRepository implementation)
│   │   │   ├── domain/ (UseCases if using Clean Arch, or models)
│   │   │   ├── ui/
│   │   │   │   ├── booklist/ (Activity, Adapter, ViewModel)
│   │   │   │   ├── bookdetail/ (Activity/Fragment, ViewModel)
│   │   │   │   ├── favorites/ (Activity, Adapter, ViewModel)
│   │   │   ├── utils/ (Helpers, constants)
│   │   ├── res/
│   │   │   ├── raw/ (mock_books.json)