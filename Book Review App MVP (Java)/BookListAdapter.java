public class BookListAdapter extends RecyclerView.Adapter<BookListAdapter.BookViewHolder> {
    private List<Book> books;
    private OnBookClickListener listener;
    
    // ViewHolder and other adapter methods
    
    interface OnBookClickListener {
        void onBookClick(Book book);
    }
}