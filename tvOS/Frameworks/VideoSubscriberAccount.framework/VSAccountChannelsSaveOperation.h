//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSError, VSAccountChannels, VSAccountChannelsCenter;

@interface VSAccountChannelsSaveOperation : VSAsyncOperation
{
    NSError *_error;
    VSAccountChannels *_unsavedAccountChannels;
    VSAccountChannelsCenter *_accountChannelsCenter;
}

@property(retain, nonatomic) VSAccountChannelsCenter *accountChannelsCenter; // @synthesize accountChannelsCenter=_accountChannelsCenter;
@property(retain, nonatomic) VSAccountChannels *unsavedAccountChannels; // @synthesize unsavedAccountChannels=_unsavedAccountChannels;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)initWithUnsavedAccountChannels:(id)arg1 accountChannelsCenter:(id)arg2;
- (id)init;

@end
