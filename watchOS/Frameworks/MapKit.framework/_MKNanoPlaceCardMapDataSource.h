//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/_MKNanoPlaceCardSectionData.h>

@class UIColor, _MKNanoPlaceCardFooterView;

@interface _MKNanoPlaceCardMapDataSource : _MKNanoPlaceCardSectionData
{
    _MKNanoPlaceCardFooterView *_cell;
}

- (void).cxx_destruct;
- (void)preloadSnapshotForWidth:(float)arg1;
- (void)notifyDelegateForActionAtRow:(unsigned int)arg1;
- (id)cellForRow:(unsigned int)arg1 inTableView:(id)arg2;
@property(retain, nonatomic) UIColor *pinTintColor;
@property(nonatomic) unsigned int pinColor;
@property(nonatomic) unsigned int mapType;
@property(nonatomic) _Bool showsName;
- (id)initWithMapItem:(id)arg1;
- (id)title;
- (int)numberOfRows;

// Remaining properties
@property(nonatomic) __weak id <_MKNanoPlaceCardMapDataDelegate> delegate; // @dynamic delegate;

@end
