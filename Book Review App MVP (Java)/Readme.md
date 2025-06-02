📱Book Review App README Highlights
1. Project Overview
 . Purpose:
  "A minimal Book Review App allowing users to browse books, view details, and save favorites for offline access."

Core Features:
  . Browse books from a mock API
  . Book details (title, author, rating, description)
  . Favorite books stored locally (Room Database
  . Offline access to saved books

2. Technical Stack
   . Language: Java
   . Architecture: MVVM (Model-View-ViewModel)
   . Libraries:
       Room: Local database for favorites
       Retrofit (or MockBookService): Fetch book data
       LiveData: Reactive UI updates
   . Constraints:
       No Kotlin
       No third-party image-loading libraries

3. Code Structure
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
