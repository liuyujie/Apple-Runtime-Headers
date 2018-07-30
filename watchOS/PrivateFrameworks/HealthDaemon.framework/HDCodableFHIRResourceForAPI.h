//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSString;

@interface HDCodableFHIRResourceForAPI : PBCodable <NSCopying>
{
    double _lastUpdatedDate;
    NSData *_data;
    NSString *_identifier;
    NSString *_resourceType;
    NSString *_sourceURL;
    struct {
        unsigned int lastUpdatedDate:1;
    } _has;
}

@property(nonatomic) double lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
@property(retain, nonatomic) NSString *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *resourceType; // @synthesize resourceType=_resourceType;
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
@property(nonatomic) _Bool hasLastUpdatedDate;
@property(readonly, nonatomic) _Bool hasSourceURL;
@property(readonly, nonatomic) _Bool hasData;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(readonly, nonatomic) _Bool hasResourceType;

@end
