//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class REElement, RESectionPath;

@interface REElementUpdateOperation : NSObject
{
    REElement *_element;
    RESectionPath *_path;
    RESectionPath *_movedToPath;
    unsigned int _type;
}

+ (id)refreshElement:(id)arg1 atPath:(id)arg2;
+ (id)moveElement:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3;
+ (id)removeElement:(id)arg1 atPath:(id)arg2;
+ (id)insertElement:(id)arg1 atPath:(id)arg2;
+ (id)reloadElement:(id)arg1 atPath:(id)arg2;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, nonatomic) RESectionPath *movedToPath; // @synthesize movedToPath=_movedToPath;
@property(readonly, nonatomic) RESectionPath *path; // @synthesize path=_path;
@property(readonly, nonatomic) REElement *element; // @synthesize element=_element;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithElement:(id)arg1 path:(id)arg2 newPath:(id)arg3 updateType:(unsigned int)arg4;

@end

