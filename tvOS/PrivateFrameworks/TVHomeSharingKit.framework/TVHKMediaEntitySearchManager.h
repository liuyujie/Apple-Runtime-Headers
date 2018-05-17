//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, TVHKMediaEntitySearchLibrary, TVHSMediaServerSessionState;

__attribute__((visibility("hidden")))
@interface TVHKMediaEntitySearchManager : NSObject
{
    TVHSMediaServerSessionState *_sessionState;
    NSOperationQueue *_serialOperationQueue;
    TVHKMediaEntitySearchLibrary *_library;
}

@property(retain, nonatomic) TVHKMediaEntitySearchLibrary *library; // @synthesize library=_library;
@property(retain, nonatomic) NSOperationQueue *serialOperationQueue; // @synthesize serialOperationQueue=_serialOperationQueue;
@property(copy, nonatomic) TVHSMediaServerSessionState *sessionState; // @synthesize sessionState=_sessionState;
- (void).cxx_destruct;
- (void)sessionStateDidChange:(id)arg1;
- (id)enqueueSearchRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)warmdown;
- (void)warmup;
- (void)dealloc;
- (id)initWithMediaServerIdentifier:(id)arg1;
- (id)init;

@end
