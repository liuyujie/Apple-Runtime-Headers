//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CKStreamLogStatsTuple : NSObject
{
    NSString *_fileAndLine;
    unsigned int _count;
    unsigned int _size;
}

@property(nonatomic) unsigned int size; // @synthesize size=_size;
@property(nonatomic) unsigned int count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *fileAndLine; // @synthesize fileAndLine=_fileAndLine;
- (void).cxx_destruct;

@end
