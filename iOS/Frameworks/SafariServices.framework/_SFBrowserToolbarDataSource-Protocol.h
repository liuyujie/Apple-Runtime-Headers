//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _SFBrowserToolbar;

@protocol _SFBrowserToolbarDataSource <NSObject>
- (_Bool)browserToolbarShouldShowOpenInSafariBarButtonItem:(_SFBrowserToolbar *)arg1;
- (double)browserToolbarDismissButtonPadding:(_SFBrowserToolbar *)arg1;
- (struct CGSize)browserToolbarDismissButtonSize:(_SFBrowserToolbar *)arg1;
@end
