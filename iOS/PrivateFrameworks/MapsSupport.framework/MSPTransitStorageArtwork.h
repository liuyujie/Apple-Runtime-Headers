//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "GEOTransitArtworkDataSource.h"
#import "NSCopying.h"

@class MSPTransitStorageIcon, MSPTransitStorageShield, NSString, PBUnknownFields;

@interface MSPTransitStorageArtwork : PBCodable <GEOTransitArtworkDataSource, NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_accessibilityText;
    long long _artworkSourceType;
    long long _artworkUseType;
    MSPTransitStorageIcon *_icon;
    MSPTransitStorageShield *_iconFallbackShield;
    MSPTransitStorageShield *_shield;
    _Bool _hasRoutingIncidentBadge;
    struct {
        unsigned int artworkSourceType:1;
        unsigned int artworkUseType:1;
        unsigned int hasRoutingIncidentBadge:1;
    } _has;
}

@property(retain, nonatomic) NSString *accessibilityText; // @synthesize accessibilityText=_accessibilityText;
@property(nonatomic) _Bool hasRoutingIncidentBadge; // @synthesize hasRoutingIncidentBadge=_hasRoutingIncidentBadge;
@property(retain, nonatomic) MSPTransitStorageShield *iconFallbackShield; // @synthesize iconFallbackShield=_iconFallbackShield;
@property(retain, nonatomic) MSPTransitStorageIcon *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) MSPTransitStorageShield *shield; // @synthesize shield=_shield;
@property(nonatomic) long long artworkUseType; // @synthesize artworkUseType=_artworkUseType;
@property(nonatomic) long long artworkSourceType; // @synthesize artworkSourceType=_artworkSourceType;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasAccessibilityText;
@property(nonatomic) _Bool hasHasRoutingIncidentBadge;
@property(readonly, nonatomic) _Bool hasIconFallbackShield;
@property(readonly, nonatomic) _Bool hasIcon;
@property(readonly, nonatomic) _Bool hasShield;
- (long long)StringAsArtworkUseType:(id)arg1;
- (id)artworkUseTypeAsString:(long long)arg1;
@property(nonatomic) _Bool hasArtworkUseType;
- (long long)StringAsArtworkSourceType:(id)arg1;
- (id)artworkSourceTypeAsString:(long long)arg1;
@property(nonatomic) _Bool hasArtworkSourceType;
@property(readonly, nonatomic) id <GEOTransitShieldDataSource> shieldDataSource;
@property(readonly, nonatomic) id <GEOTransitIconDataSource> iconDataSource;
@property(readonly, nonatomic) id <GEOTransitShieldDataSource> iconFallbackShieldDataSource;
- (id)initWithArtwork:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

