struct Page
{
public:
    Page();
    ~Page();



    unsigned int frameNumber;
    bool valid;

    Page getPage();
};