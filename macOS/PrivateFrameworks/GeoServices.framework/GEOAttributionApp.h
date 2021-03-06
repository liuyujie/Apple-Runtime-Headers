//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface GEOAttributionApp : PBCodable <NSCopying>
{
    NSString *_appBundleIdentifier;
    NSMutableArray *_handledSchemes;
    int _restaurantReservationExtensionSupport;
    BOOL _supportsRestaurantQueueing;
    BOOL _supportsRestaurantReservations;
    struct {
        unsigned int restaurantReservationExtensionSupport:1;
        unsigned int supportsRestaurantQueueing:1;
        unsigned int supportsRestaurantReservations:1;
    } _has;
}

+ (Class)handledSchemesType;
@property(nonatomic) BOOL supportsRestaurantQueueing; // @synthesize supportsRestaurantQueueing=_supportsRestaurantQueueing;
@property(nonatomic) BOOL supportsRestaurantReservations; // @synthesize supportsRestaurantReservations=_supportsRestaurantReservations;
@property(retain, nonatomic) NSMutableArray *handledSchemes; // @synthesize handledSchemes=_handledSchemes;
@property(retain, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsRestaurantReservationExtensionSupport:(id)arg1;
- (id)restaurantReservationExtensionSupportAsString:(int)arg1;
@property(nonatomic) BOOL hasRestaurantReservationExtensionSupport;
@property(nonatomic) int restaurantReservationExtensionSupport; // @synthesize restaurantReservationExtensionSupport=_restaurantReservationExtensionSupport;
@property(nonatomic) BOOL hasSupportsRestaurantQueueing;
@property(nonatomic) BOOL hasSupportsRestaurantReservations;
- (id)handledSchemesAtIndex:(unsigned long long)arg1;
- (unsigned long long)handledSchemesCount;
- (void)addHandledSchemes:(id)arg1;
- (void)clearHandledSchemes;

@end

