//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLPreviewItemProvider.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface QLDataSource : NSObject <QLPreviewItemProvider>
{
    NSArray *_previewItems;
}

- (void).cxx_destruct;
- (void)previewItemAtIndex:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithPreviewItems:(id)arg1;

@end
