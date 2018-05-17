//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOMapRegion, NSMutableArray, NSString;

@interface GEORPResolution : PBCodable <NSCopying>
{
    double _resolutionDate;
    unsigned long long _transitLineMuid;
    GEOMapRegion *_displayRegion;
    int _displayStyle;
    NSString *_localizedAlertText;
    NSMutableArray *_localizedChangeLists;
    NSString *_localizedDescription;
    NSMutableArray *_updatedPlaces;
    struct {
        unsigned int resolutionDate:1;
        unsigned int transitLineMuid:1;
        unsigned int displayStyle:1;
    } _has;
}

+ (Class)updatedPlaceType;
+ (Class)localizedChangeListType;
@property(retain, nonatomic) NSString *localizedAlertText; // @synthesize localizedAlertText=_localizedAlertText;
@property(retain, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(nonatomic) unsigned long long transitLineMuid; // @synthesize transitLineMuid=_transitLineMuid;
@property(retain, nonatomic) NSMutableArray *updatedPlaces; // @synthesize updatedPlaces=_updatedPlaces;
@property(retain, nonatomic) NSMutableArray *localizedChangeLists; // @synthesize localizedChangeLists=_localizedChangeLists;
@property(retain, nonatomic) GEOMapRegion *displayRegion; // @synthesize displayRegion=_displayRegion;
@property(nonatomic) double resolutionDate; // @synthesize resolutionDate=_resolutionDate;
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
- (int)StringAsDisplayStyle:(id)arg1;
- (id)displayStyleAsString:(int)arg1;
@property(nonatomic) BOOL hasDisplayStyle;
@property(nonatomic) int displayStyle; // @synthesize displayStyle=_displayStyle;
@property(readonly, nonatomic) BOOL hasLocalizedAlertText;
@property(readonly, nonatomic) BOOL hasLocalizedDescription;
@property(nonatomic) BOOL hasTransitLineMuid;
- (id)updatedPlaceAtIndex:(unsigned long long)arg1;
- (unsigned long long)updatedPlacesCount;
- (void)addUpdatedPlace:(id)arg1;
- (void)clearUpdatedPlaces;
- (id)localizedChangeListAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedChangeListsCount;
- (void)addLocalizedChangeList:(id)arg1;
- (void)clearLocalizedChangeLists;
@property(readonly, nonatomic) BOOL hasDisplayRegion;
@property(nonatomic) BOOL hasResolutionDate;

@end
