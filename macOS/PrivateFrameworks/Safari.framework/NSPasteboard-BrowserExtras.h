//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPasteboard.h"

@interface NSPasteboard (BrowserExtras)
- (BOOL)safari_containsAnyURLsViableForTopSites;
- (BOOL)safari_containsAnyURLs;
- (id)safari_URLsFromString;
- (id)safari_URLs;
- (void)safari_writeURLs:(id)arg1 andTitles:(id)arg2;
- (void)safari_replaceContentsWithURL:(id)arg1;
@end
