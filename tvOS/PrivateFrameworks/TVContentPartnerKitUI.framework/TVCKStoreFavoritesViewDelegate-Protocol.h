//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TVCKStoreFavoritesView, TVContentItem;

@protocol TVCKStoreFavoritesViewDelegate <NSObject>

@optional
- (void)storeFavoritesView:(TVCKStoreFavoritesView *)arg1 didEndEditingItemAtIndex:(unsigned long long)arg2;
- (void)storeFavoritesView:(TVCKStoreFavoritesView *)arg1 willBeginEditingItemAtIndex:(unsigned long long)arg2;
- (void)storeFavoritesView:(TVCKStoreFavoritesView *)arg1 moveItemAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (_Bool)storeFavoritesView:(TVCKStoreFavoritesView *)arg1 canMoveItemAtIndex:(unsigned long long)arg2;
- (void)storeFavoritesView:(TVCKStoreFavoritesView *)arg1 didSelectItem:(TVContentItem *)arg2;
@end

