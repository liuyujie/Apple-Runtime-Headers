//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SXLayouterFactory : NSObject
{
    id <SXLayouterDelegate> _layouterDelegate;
}

@property(readonly, nonatomic) __weak id <SXLayouterDelegate> layouterDelegate; // @synthesize layouterDelegate=_layouterDelegate;
- (void).cxx_destruct;
- (id)layouterForContainerComponentBlueprint:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

