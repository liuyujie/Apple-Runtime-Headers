//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface SASymbol : NSObject
{
    unsigned long long _offsetIntoTextSegment;
    unsigned long long _length;
    NSString *_name;
    NSMutableArray *_sourceInfos;
}

+ (id)symbolWithCSSymbol:(struct _CSTypeRef)arg1 textSegmentLoadAddress:(unsigned long long)arg2;
+ (id)symbolWithOffsetIntoTextSegment:(unsigned long long)arg1 length:(unsigned long long)arg2 name:(id)arg3;
@property(readonly) NSMutableArray *sourceInfos; // @synthesize sourceInfos=_sourceInfos;
@property(retain) NSString *name; // @synthesize name=_name;
@property unsigned long long length; // @synthesize length=_length;
@property unsigned long long offsetIntoTextSegment; // @synthesize offsetIntoTextSegment=_offsetIntoTextSegment;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)addSourceInfoWithOffsetIntoTextSegment:(unsigned long long)arg1 length:(unsigned long long)arg2 lineNum:(unsigned int)arg3 columnNum:(unsigned int)arg4 filePath:(id)arg5;
- (id)sourceInfoWithOffsetIntoTextSegment:(unsigned long long)arg1;
- (id)init;

@end
