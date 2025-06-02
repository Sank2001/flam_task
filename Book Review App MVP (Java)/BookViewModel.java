public class BookViewModel extends ViewModel {
    private BookRepository repository;
    
    public BookViewModel(BookRepository repository) {
        this.repository = repository;
    }
    
    public LiveData<List<Book>> getBooks() {
        return repository.getBooks();
    }
    
    // Other methods...
}