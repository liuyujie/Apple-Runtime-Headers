//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCNRendererViewPoint : NSObject
{
    struct SCNMatrix4 viewMatrix;
    struct SCNMatrix4 projectionMatrix;
}

@property(nonatomic) struct SCNMatrix4 projectionMatrix; // @synthesize projectionMatrix;
@property(nonatomic) struct SCNMatrix4 viewMatrix; // @synthesize viewMatrix;
- (void)dealloc;

@end
