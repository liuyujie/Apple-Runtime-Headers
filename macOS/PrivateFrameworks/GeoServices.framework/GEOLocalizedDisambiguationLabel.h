//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, PBUnknownFields;

@interface GEOLocalizedDisambiguationLabel : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_locale;
    NSString *_string;
}

@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasString;
@property(readonly, nonatomic) BOOL hasLocale;

@end
