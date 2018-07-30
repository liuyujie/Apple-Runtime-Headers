//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString, _SFPBColor, _SFPBLatLng, _SFPBMapRegion, _SFPBPin, _SFPBPunchout;

@protocol _SFPBMapCardSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *pins;
@property(nonatomic) int pinBehavior;
@property(retain, nonatomic) _SFPBMapRegion *boundingMapRegion;
@property(nonatomic) int sizeFormat;
@property(nonatomic) _Bool interactive;
@property(copy, nonatomic) NSString *footnote;
@property(copy, nonatomic) NSString *footnoteLabel;
@property(retain, nonatomic) _SFPBColor *pinColor;
@property(retain, nonatomic) _SFPBLatLng *location;
@property(retain, nonatomic) _SFPBColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) _Bool hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding;
@property(nonatomic) _Bool canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBPin *)pinsAtIndex:(unsigned int)arg1;
- (unsigned int)pinsCount;
- (void)addPins:(_SFPBPin *)arg1;
- (void)clearPins;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned int)arg1;
- (unsigned int)punchoutOptionsCount;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)clearPunchoutOptions;
@end
