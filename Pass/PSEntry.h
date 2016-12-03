//
//  PSEntry.h
//  pass-ios
//
//  Created by Kiara Robles on 11/3/16.
//  Copyright © 2016 Kiara Robles. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PSEntry : NSObject

@property (nonatomic,retain) NSString *name;
@property (nonatomic,retain) NSString *path;
@property (nonatomic,assign) BOOL is_dir;
@property (nonatomic,readonly) NSString *pass;
@property (nonatomic, strong) NSMutableArray *store;

- (NSString *)passWithPassword:(NSString *)passphrase passwordOnly:(BOOL)passwordOnly;

@end
