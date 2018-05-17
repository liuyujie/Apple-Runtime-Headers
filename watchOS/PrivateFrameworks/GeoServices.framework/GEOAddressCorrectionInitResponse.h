//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLocation, NSMutableArray, NSString;

@interface GEOAddressCorrectionInitResponse : PBCodable <NSCopying>
{
    NSMutableArray *_address;
    NSString *_addressID;
    GEOLocation *_addressLocation;
    unsigned int _numberOfVisitsBucketSize;
    int _statusCode;
    struct {
        unsigned int numberOfVisitsBucketSize:1;
        unsigned int statusCode:1;
    } _has;
}

+ (Class)addressType;
@property(retain, nonatomic) NSMutableArray *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *addressID; // @synthesize addressID=_addressID;
@property(retain, nonatomic) GEOLocation *addressLocation; // @synthesize addressLocation=_addressLocation;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)addressAtIndex:(unsigned int)arg1;
- (unsigned int)addressCount;
- (void)addAddress:(id)arg1;
- (void)clearAddress;
@property(nonatomic) _Bool hasNumberOfVisitsBucketSize;
@property(nonatomic) unsigned int numberOfVisitsBucketSize; // @synthesize numberOfVisitsBucketSize=_numberOfVisitsBucketSize;
@property(readonly, nonatomic) _Bool hasAddressID;
@property(readonly, nonatomic) _Bool hasAddressLocation;
- (int)StringAsStatusCode:(id)arg1;
- (id)statusCodeAsString:(int)arg1;
@property(nonatomic) _Bool hasStatusCode;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;

@end
