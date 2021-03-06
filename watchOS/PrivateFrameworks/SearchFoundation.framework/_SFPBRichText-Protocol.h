//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString, _SFPBFormattedText, _SFPBGraphicalFloat, _SFPBImage, _SFPBText;

@protocol _SFPBRichText <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *formattedTextPieces;
@property(copy, nonatomic) NSArray *icons;
@property(copy, nonatomic) NSString *contentAdvisory;
@property(retain, nonatomic) _SFPBGraphicalFloat *starRating;
@property(retain, nonatomic) _SFPBText *text;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBFormattedText *)formattedTextPiecesAtIndex:(unsigned int)arg1;
- (unsigned int)formattedTextPiecesCount;
- (void)addFormattedTextPieces:(_SFPBFormattedText *)arg1;
- (void)clearFormattedTextPieces;
- (_SFPBImage *)iconsAtIndex:(unsigned int)arg1;
- (unsigned int)iconsCount;
- (void)addIcons:(_SFPBImage *)arg1;
- (void)clearIcons;
@end

