//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSImage, NSString, _WKFrameHandle;

@protocol ReaderControllerMessageReceiver <NSObject>
- (void)didCreateSnapshot:(NSImage *)arg1 forRequestIdentifier:(unsigned long long)arg2;
- (void)didGetPrintingFrame:(_WKFrameHandle *)arg1;
- (void)articleScrolled:(NSDictionary *)arg1;
- (void)contentIsReadyForDisplayWithScrollOffset:(double)arg1 languageTag:(NSString *)arg2;
- (void)didChangeNextPageLoadingState;
@end
