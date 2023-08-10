import pandas as pd
'''
s=pd.Series([5,1,7,3])
print(s)
#print(dir(pd))

data1={'State':['Maha','Goa'],'Year':[2000,2001],'population':[2.3,1.2]}
        
df=pd.DataFrame(data1)
print(df)
'''

data1=pd.read_csv("mydata1.csv")
df=pd.DataFrame(data1)
print(df)
print("After deletion...")
#new_df=df.dropna()

#new_df=df.fillna("nasik")
'''
new_df=df.dropna(subset=df["Addr"])

print(new_df)
new_df.to_csv("mydata1.csv",index=False)
'''

print(df.duplicated())
df.drop_duplicates(inplace=True)

print(df)
df.to_csv("mydata1.csv",index=False)