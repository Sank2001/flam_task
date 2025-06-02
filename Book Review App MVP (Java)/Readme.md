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
├── data/
│   ├── local/          # Room Entities, DAOs, Database
│   ├── remote/         # Retrofit API Service (or JSON mock)
│   └── repository/     # BookRepositoryImpl
├── domain/             # Models, UseCases (if Clean Architecture)
└── ui/
    ├── booklist/       # BookListActivity/ViewModel
    ├── bookdetail/     # BookDetailFragment/ViewModel
    └── adapters/       # RecyclerView Adapters

 ![Screenshot 2025-06-02 135612](https://github.com/user-attachments/assets/e0ebfd9b-d631-4d7f-900a-7749f0ad7d5f)

