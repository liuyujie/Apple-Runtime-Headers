//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Home/HFItemModule.h>

#import "HFHomeObserver.h"

@class HFCurrentZonesItem, HFItem, HFStaticItemProvider, HFZoneItemProvider, HFZoneSuggestionItemProvider, HMRoom, NSSet, NSString;

@interface HFZoneModule : HFItemModule <HFHomeObserver>
{
    _Bool _expanded;
    NSSet *_itemProviders;
    HMRoom *_room;
    HFCurrentZonesItem *_currentZoneItem;
    HFItem *_createNewZoneItem;
    HFStaticItemProvider *_expandedItemProvider;
    HFStaticItemProvider *_createNewZoneItemProvider;
    HFStaticItemProvider *_currentZoneItemProvider;
    HFZoneItemProvider *_zoneItemProvider;
    HFZoneSuggestionItemProvider *_zoneSuggestionItemProvider;
}

@property(retain, nonatomic) HFZoneSuggestionItemProvider *zoneSuggestionItemProvider; // @synthesize zoneSuggestionItemProvider=_zoneSuggestionItemProvider;
@property(retain, nonatomic) HFZoneItemProvider *zoneItemProvider; // @synthesize zoneItemProvider=_zoneItemProvider;
@property(retain, nonatomic) HFStaticItemProvider *currentZoneItemProvider; // @synthesize currentZoneItemProvider=_currentZoneItemProvider;
@property(retain, nonatomic) HFStaticItemProvider *createNewZoneItemProvider; // @synthesize createNewZoneItemProvider=_createNewZoneItemProvider;
@property(retain, nonatomic) HFStaticItemProvider *expandedItemProvider; // @synthesize expandedItemProvider=_expandedItemProvider;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) HFItem *createNewZoneItem; // @synthesize createNewZoneItem=_createNewZoneItem;
@property(readonly, nonatomic) HFCurrentZonesItem *currentZoneItem; // @synthesize currentZoneItem=_currentZoneItem;
@property(readonly, nonatomic) HMRoom *room; // @synthesize room=_room;
@property(retain, nonatomic) NSSet *itemProviders; // @synthesize itemProviders=_itemProviders;
- (void).cxx_destruct;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2 fromZone:(id)arg3;
- (void)home:(id)arg1 didAddRoom:(id)arg2 toZone:(id)arg3;
- (void)home:(id)arg1 didUpdateNameForZone:(id)arg2;
- (void)home:(id)arg1 didRemoveZone:(id)arg2;
- (void)home:(id)arg1 didAddZone:(id)arg2;
- (void)_reloadItemProviders;
- (_Bool)canExpand;
- (_Bool)toggleExpansion;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 room:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
