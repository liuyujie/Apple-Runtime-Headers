//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class FCColor, FCLoadableFont;

@interface FCTextInfo : NSObject <NSCopying>
{
    FCLoadableFont *_font;
    long long _fontSizeAdjustment;
    double _lineHeightMultiplier;
    FCColor *_color;
}

+ (id)textInfoFromJSONValues:(id)arg1;
@property(copy, nonatomic) FCColor *color; // @synthesize color=_color;
@property(nonatomic) double lineHeightMultiplier; // @synthesize lineHeightMultiplier=_lineHeightMultiplier;
@property(nonatomic) long long fontSizeAdjustment; // @synthesize fontSizeAdjustment=_fontSizeAdjustment;
@property(copy, nonatomic) FCLoadableFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
- (double)fontSizeWithInitialFontSize:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

