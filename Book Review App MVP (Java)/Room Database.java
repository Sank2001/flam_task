@Database(entities = {BookEntity.class}, version = 1)
public abstract class AppDatabase extends RoomDatabase {
    public abstract BookDao bookDao();
}

@Entity(tableName = "favorite_books")
public class BookEntity {
    @PrimaryKey
    public String id;
    public String title;
    // Other fields...
}

@Dao
public interface BookDao {
    @Insert
    void insert(BookEntity book);
    
    @Delete
    void delete(BookEntity book);
    
    @Query("SELECT * FROM favorite_books")
    LiveData<List<BookEntity>> getAllFavorites();
}