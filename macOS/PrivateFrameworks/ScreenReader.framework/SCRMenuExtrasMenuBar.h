//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRWindow.h>

__attribute__((visibility("hidden")))
@interface SCRMenuExtrasMenuBar : SCRWindow
{
}

- (BOOL)syncKBFocusToVOCursorWithOutputRequest:(id)arg1 playSound:(BOOL)arg2 withSelection:(BOOL)arg3;
- (id)prepareUIChildrenForNavigation:(id)arg1;
- (id)buildDefaultChildrenWithUIElements:(id)arg1;
- (id)_menuExtras;
- (void)setIsEventHandler:(BOOL)arg1 isKeyboardHandler:(BOOL)arg2;
- (BOOL)handleEvent:(id)arg1 request:(id)arg2;
- (void)_handleSelectionChange;
- (id)typeDescription;
- (id)titleDescription;
- (BOOL)showInGuide;
- (id)scanElementForMarkerSearch;

@end
