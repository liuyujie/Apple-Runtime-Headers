//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SockPuppetGizmo/SPPageViewController.h>

@class SPInterfaceListView;

@interface SPPagingScrollViewController : SPPageViewController
{
    int _initialViewIndex;
    SPInterfaceListView *_listView;
}

@property(readonly, nonatomic) SPInterfaceListView *listView; // @synthesize listView=_listView;
@property(readonly, nonatomic) int initialViewIndex; // @synthesize initialViewIndex=_initialViewIndex;
- (void).cxx_destruct;
- (void)setViewControllers:(id)arg1 initialViewIndex:(int)arg2 listView:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
