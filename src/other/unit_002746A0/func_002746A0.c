/* compiler: ee-gcc2.9-991111 */
struct OsdParam {
    unsigned int spdifMode : 1;
    unsigned int screenType : 2;
    unsigned int videoOutput : 1;
    unsigned int japLanguage : 1;
    unsigned int ps1drvConfig : 8;
    unsigned int version : 3;
    unsigned int language : 5;
    unsigned int timezoneOffset : 11;
};
extern unsigned char D_00305EA4;
void func_00285D10(struct OsdParam *p);
int func_00274660(void);

int func_002746A0(void)
{
    struct OsdParam p;
    int lang;

    func_00285D10(&p);
    if (func_00274660()) {
        lang = D_00305EA4;
    } else {
        func_00285D10(&p);
        if (p.version == 0)
            lang = p.japLanguage;
        else
            lang = p.language;
    }
    return lang;
}
