//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKUIScrollingTabNavigationBar.h"

@class UINavigationController;

@interface MusicNavigationBar : SKUIScrollingTabNavigationBar
{
    UINavigationController *_musicNavigationController;
}

@property(nonatomic) __weak UINavigationController *musicNavigationController; // @synthesize musicNavigationController=_musicNavigationController;
- (void).cxx_destruct;
- (id)_popNavigationItemWithTransition:(int)arg1;
- (void)_pushNavigationItem:(id)arg1 transition:(int)arg2;

@end
