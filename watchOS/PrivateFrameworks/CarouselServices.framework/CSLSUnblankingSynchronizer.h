//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CSLSUnblankingSynchronizer : NSObject
{
    _Bool _enabled;
    CDUnknownBlockType _prepareForUnblankBlock;
}

@property(copy, nonatomic) CDUnknownBlockType prepareForUnblankBlock; // @synthesize prepareForUnblankBlock=_prepareForUnblankBlock;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)readyForUnblank:(unsigned int)arg1;

@end
