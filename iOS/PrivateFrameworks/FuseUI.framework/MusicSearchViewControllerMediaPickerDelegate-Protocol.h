//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MusicSearchBar, MusicSearchViewController, NSString;

@protocol MusicSearchViewControllerMediaPickerDelegate <NSObject>

@optional
- (void)musicSearchViewController:(MusicSearchViewController *)arg1 didSelectStoreItemWithID:(NSString *)arg2;
- (void)musicSearchViewControllerDidFinish:(MusicSearchViewController *)arg1 withSearchBar:(MusicSearchBar *)arg2;
@end

