//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface SCNMTLRenderPass : NSObject
{
    CDUnknownBlockType setupBlock;
    CDUnknownBlockType executeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType executeBlock; // @synthesize executeBlock;
@property(copy, nonatomic) CDUnknownBlockType setupBlock; // @synthesize setupBlock;
- (void)execute:(id)arg1;
- (void)setup:(id)arg1;
- (void)dealloc;

@end
