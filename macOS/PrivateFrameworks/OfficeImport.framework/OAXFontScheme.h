//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface OAXFontScheme : NSObject
{
}

+ (void)writeFontScheme:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)writeFont:(id)arg1 elementName:(id)arg2 to:(id)arg3 state:(id)arg4;
+ (void)writeTypeface:(id)arg1 elementName:(id)arg2 to:(id)arg3 state:(id)arg4;
+ (void)readFontSchemeEntries:(struct _xmlNode *)arg1 font:(id)arg2;
+ (void)readFontScheme:(struct _xmlNode *)arg1 toFontScheme:(id)arg2 drawingState:(id)arg3;

@end
