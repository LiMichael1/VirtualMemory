#pragma once
struct Page
{
public:
    Page();
    ~Page();

    char Pbytes[256];

    Page &getPage();
};

