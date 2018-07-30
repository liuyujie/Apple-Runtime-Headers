//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBTextStyle : NSObject <NSCopying>
{
    _Bool _ignoreTextMarginOnKey;
    NSString *_fontName;
    float _fontSize;
    float _imageScale;
    float _minFontSize;
    float _kerning;
    float _textOpacity;
    NSString *_textColor;
    NSString *_etchColor;
    int _alignment;
    float _pathWeight;
    float _fontWeight;
    int _anchorCorner;
    int _selector;
    struct CGPoint _textOffset;
    struct CGPoint _etchOffset;
}

+ (id)styleWithTextColor:(id)arg1;
+ (id)styleWithFontName:(id)arg1 withFontSize:(float)arg2;
@property(nonatomic) _Bool ignoreTextMarginOnKey; // @synthesize ignoreTextMarginOnKey=_ignoreTextMarginOnKey;
@property(nonatomic) int selector; // @synthesize selector=_selector;
@property(nonatomic) int anchorCorner; // @synthesize anchorCorner=_anchorCorner;
@property(nonatomic) float fontWeight; // @synthesize fontWeight=_fontWeight;
@property(nonatomic) float pathWeight; // @synthesize pathWeight=_pathWeight;
@property(nonatomic) struct CGPoint etchOffset; // @synthesize etchOffset=_etchOffset;
@property(nonatomic) struct CGPoint textOffset; // @synthesize textOffset=_textOffset;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
@property(retain, nonatomic) NSString *etchColor; // @synthesize etchColor=_etchColor;
@property(retain, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) float textOpacity; // @synthesize textOpacity=_textOpacity;
@property(nonatomic) float kerning; // @synthesize kerning=_kerning;
@property(nonatomic) float minFontSize; // @synthesize minFontSize=_minFontSize;
@property(nonatomic) float imageScale; // @synthesize imageScale=_imageScale;
@property(nonatomic) float fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)overlayWithStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end
