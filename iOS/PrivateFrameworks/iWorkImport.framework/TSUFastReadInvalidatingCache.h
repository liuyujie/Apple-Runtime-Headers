//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCondition;

__attribute__((visibility("hidden")))
@interface TSUFastReadInvalidatingCache : NSObject
{
    CDUnknownBlockType mGenerator;
    // Error parsing type: A@, name: mValue
    // Error parsing type: Aq, name: mReaderCount
    // Error parsing type: A@, name: mToDispose
    _Bool mReentrant;
    NSCondition *mCondition;
    _Bool mIsGenerating;
}

- (void)invalidate;
- (id)value;
- (void)p_setValue:(id)arg1;
- (void)dealloc;
- (id)initForReentrant:(_Bool)arg1 withGenerator:(CDUnknownBlockType)arg2;

@end

