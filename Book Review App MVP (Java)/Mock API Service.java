public interface BookApiService {
    @GET("books")
    Call<List<Book>> getBooks();
    
    @GET("books/{id}")
    Call<Book> getBookDetails(@Path("id") String bookId);
}

public class MockBookApi {
    public static List<Book> getBooksFromJson(Context context) {
        // Read from raw/mock_books.json
        // Parse JSON and return List<Book>
    }
}