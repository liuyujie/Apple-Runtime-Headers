//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HBRawFolder, NSNumber;

@interface HBRawRootItem : NSObject
{
    NSNumber *_itemOrderId;
    HBRawFolder *_parentFolder;
}

@property(nonatomic) __weak HBRawFolder *parentFolder; // @synthesize parentFolder=_parentFolder;
@property(retain, nonatomic) NSNumber *itemOrderId; // @synthesize itemOrderId=_itemOrderId;
- (void).cxx_destruct;

@end

