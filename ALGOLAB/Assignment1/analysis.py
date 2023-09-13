import pandas as pd
import matplotlib.pyplot as plt
df = pd.read_csv('DataSet_UD.csv')
df['Apps'].plot(kind='hist',bins=15)
