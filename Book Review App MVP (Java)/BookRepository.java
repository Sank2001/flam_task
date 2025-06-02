public interface BookRepository {
    LiveData<List<Book>> getBooks();
    LiveData<Book> getBookDetails(String bookId);
    void toggleFavorite(Book book);
    LiveData<List<Book>> getFavoriteBooks();
}