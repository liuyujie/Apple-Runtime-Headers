//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLocation, NSString;

@interface GEOAddressCorrectionAddress : PBCodable <NSCopying>
{
    NSString *_addressID;
    GEOLocation *_addressLocation;
}

@property(retain, nonatomic) NSString *addressID; // @synthesize addressID=_addressID;
@property(retain, nonatomic) GEOLocation *addressLocation; // @synthesize addressLocation=_addressLocation;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasAddressID;
@property(readonly, nonatomic) _Bool hasAddressLocation;

@end

