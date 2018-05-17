//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface AWDBarcodeSupportCodeDetectedEvent : PBCodable <NSCopying>
{
    unsigned long long _detectionTimeMs;
    unsigned long long _timestamp;
    int _appLinkPreferredOpenStrategy;
    int _barcodeDataType;
    int _barcodeURLType;
    int _clientType;
    int _invalidBarcodeDataType;
    struct {
        unsigned int detectionTimeMs:1;
        unsigned int timestamp:1;
        unsigned int appLinkPreferredOpenStrategy:1;
        unsigned int barcodeDataType:1;
        unsigned int barcodeURLType:1;
        unsigned int clientType:1;
        unsigned int invalidBarcodeDataType:1;
    } _has;
}

@property(nonatomic) unsigned long long detectionTimeMs; // @synthesize detectionTimeMs=_detectionTimeMs;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsAppLinkPreferredOpenStrategy:(id)arg1;
- (id)appLinkPreferredOpenStrategyAsString:(int)arg1;
@property(nonatomic) _Bool hasAppLinkPreferredOpenStrategy;
@property(nonatomic) int appLinkPreferredOpenStrategy; // @synthesize appLinkPreferredOpenStrategy=_appLinkPreferredOpenStrategy;
- (int)StringAsBarcodeURLType:(id)arg1;
- (id)barcodeURLTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasBarcodeURLType;
@property(nonatomic) int barcodeURLType; // @synthesize barcodeURLType=_barcodeURLType;
- (int)StringAsInvalidBarcodeDataType:(id)arg1;
- (id)invalidBarcodeDataTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasInvalidBarcodeDataType;
@property(nonatomic) int invalidBarcodeDataType; // @synthesize invalidBarcodeDataType=_invalidBarcodeDataType;
@property(nonatomic) _Bool hasDetectionTimeMs;
- (int)StringAsBarcodeDataType:(id)arg1;
- (id)barcodeDataTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasBarcodeDataType;
@property(nonatomic) int barcodeDataType; // @synthesize barcodeDataType=_barcodeDataType;
- (int)StringAsClientType:(id)arg1;
- (id)clientTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasClientType;
@property(nonatomic) int clientType; // @synthesize clientType=_clientType;
@property(nonatomic) _Bool hasTimestamp;

@end
