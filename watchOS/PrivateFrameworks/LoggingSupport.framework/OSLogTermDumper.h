//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OSLogTermDumper : NSObject
{
    struct os_trace_blob_s _ob;
    unsigned short _last_attrs;
    unsigned char _ob_slop[1];
    int _fd;
    _Bool _fancy;
    unsigned short _cur_attrs;
}

@property(nonatomic) unsigned short style; // @synthesize style=_cur_attrs;
@property(readonly, nonatomic, getter=isFancy) _Bool fancy; // @synthesize fancy=_fancy;
- (void)putUUID:(unsigned char [16])arg1;
- (void)puts:(const char *)arg1;
- (unsigned int)format:(const char *)arg1;
- (void)pad:(int)arg1 count:(unsigned long)arg2;
- (void)writeln;
- (void)hexdump:(const void *)arg1 length:(unsigned long)arg2;
- (unsigned int)vformat:(const char *)arg1 args:(char *)arg2;
- (void)putc:(int)arg1;
- (void)write:(const void *)arg1 size:(unsigned long)arg2;
- (void)flush:(_Bool)arg1;
- (void)endEditing;
- (void)beginEditing;
- (void)_flushAttrs;
- (void)startPager;
- (void)dealloc;
- (void)close;
- (id)initWithFd:(int)arg1 forceFancy:(_Bool)arg2;
- (id)init;
- (void)resetStyle;
@property(nonatomic) unsigned char fgColor;
@property(nonatomic) unsigned char bgColor;
@property(nonatomic, getter=isUnderlined) _Bool underline;
@property(nonatomic, getter=isOblique) _Bool oblique;
@property(nonatomic, getter=isBold) _Bool bold;

@end
